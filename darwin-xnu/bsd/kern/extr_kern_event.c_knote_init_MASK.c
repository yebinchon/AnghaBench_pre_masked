
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqworkq {int dummy; } ;
struct kqworkloop {int dummy; } ;
struct kqfile {int dummy; } ;
struct knote {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int,int,int,char*) ;

void
FUNC_5(void)
{
 VAR_0 = FUNC_4(sizeof(struct knote), 8192*sizeof(struct knote),
                    8192, "knote zone");

 VAR_4 = FUNC_4(sizeof(struct kqfile), 8192*sizeof(struct kqfile),
                     8192, "kqueue file zone");

 VAR_6 = FUNC_4(sizeof(struct kqworkq), 8192*sizeof(struct kqworkq),
                     8192, "kqueue workq zone");

 VAR_5 = FUNC_4(sizeof(struct kqworkloop), 8192*sizeof(struct kqworkloop),
                     8192, "kqueue workloop zone");


 VAR_3 = FUNC_2();

 VAR_2 = FUNC_1("kqueue", VAR_3);


 VAR_1 = FUNC_0();





}
