
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_5 = -VAR_0;

 FUNC_3("IBM eServer i/pSeries Virtual SCSI Target Driver\n");

 VAR_3 =
  FUNC_4(&VAR_2);
 if (!VAR_3)
  return VAR_5;

 VAR_4 = FUNC_0("ibmvtgtd");
 if (!VAR_4)
  goto release_transport;

 VAR_5 = FUNC_2();
 if (VAR_5)
  goto destroy_wq;

 VAR_5 = FUNC_6(&VAR_1);
 if (VAR_5)
  goto destroy_wq;

 return 0;
destroy_wq:
 FUNC_1(VAR_4);
release_transport:
 FUNC_5(VAR_3);
 return VAR_5;
}
