
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int,char*) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;

__attribute__((used)) static int
FUNC_6(scsi_qla_host_t *VAR_6)
{
 int VAR_7 = VAR_3;
 unsigned long VAR_8 = VAR_4 + (1 * VAR_0);
 uint32_t VAR_9, VAR_10;

 do {
  if (FUNC_5(VAR_4, VAR_8)) {
   FUNC_1(VAR_5, VAR_6, 0xb07c,
       "Nic Core f/w is not alive.\n");
   VAR_7 = VAR_2;
   break;
  }

  FUNC_2(VAR_6, 0);
  FUNC_4(VAR_6, VAR_1,
      &VAR_9);
  FUNC_3(VAR_6, 0);
  FUNC_0(100);
  FUNC_2(VAR_6, 0);
  FUNC_4(VAR_6, VAR_1,
      &VAR_10);
  FUNC_3(VAR_6, 0);
 } while (VAR_9 == VAR_10);

 return VAR_7;
}
