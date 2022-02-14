
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* null_print; char* null_print_client; int file_encoding; int need_transcoding; int fe_msgbuf; int rowcontext; int binary; void* delim; } ;
typedef int CopyOutStateData ;
typedef TYPE_1__* CopyOutState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 char* FUNC_9 (char*,int,int) ;
 void* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static CopyOutState
FUNC_12(void)
{
 CopyOutState VAR_6 = (CopyOutState) FUNC_6(sizeof(CopyOutStateData));

 int VAR_7 = FUNC_8();
 int VAR_8 = FUNC_1();
 int VAR_9 = FUNC_7();


 char *VAR_10 = FUNC_10("\\N");
 int VAR_11 = FUNC_11(VAR_10);
 char *VAR_12 = FUNC_9(VAR_10, VAR_11, VAR_7);


 VAR_6->null_print = VAR_10;
 VAR_6->null_print_client = VAR_12;
 VAR_6->delim = FUNC_10("\t");

 VAR_6->binary = VAR_3;


 VAR_6->file_encoding = VAR_7;

 if (FUNC_2(VAR_7))
 {
  FUNC_3(VAR_5, (FUNC_4("cannot repartition into encoding caller cannot "
          "receive")));
 }


 if ((VAR_7 != VAR_8) || (VAR_9 > 1))
 {
  VAR_6->need_transcoding = 1;
 }
 else
 {
  VAR_6->need_transcoding = 0;
 }






 VAR_6->rowcontext = FUNC_0(VAR_4,
                  "WorkerRowOutputContext",
                  VAR_2,
                  VAR_0,
                  VAR_1);


 VAR_6->fe_msgbuf = FUNC_5();

 return VAR_6;
}
