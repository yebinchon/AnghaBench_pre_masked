
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int write_proc; int read_proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (char*,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,int,int *,int *) ;
 int * FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,int *) ;

int
FUNC_4(void)
{
 VAR_6 = FUNC_2("dasd", ((void*)0));
 if (!VAR_6)
  goto out_nodasd;
 VAR_4 = FUNC_1("devices",
      VAR_1 | VAR_2 | VAR_3,
      VAR_6,
      &VAR_5);
 if (!VAR_4)
  goto out_nodevices;
 VAR_7 = FUNC_0("statistics",
        VAR_1 | VAR_2 | VAR_3,
        VAR_6);
 if (!VAR_7)
  goto out_nostatistics;
 VAR_7->read_proc = VAR_8;
 VAR_7->write_proc = VAR_9;
 return 0;

 out_nostatistics:
 FUNC_3("devices", VAR_6);
 out_nodevices:
 FUNC_3("dasd", ((void*)0));
 out_nodasd:
 return -VAR_0;
}
