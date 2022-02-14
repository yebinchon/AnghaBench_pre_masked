
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zone_t ;
typedef int vm_size_t ;
struct pipe_garbage {int dummy; } ;
struct pipe {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (int,int,int,char*) ;

void
FUNC_5(void)
{
 VAR_1=0;
 vm_size_t VAR_8;

 VAR_8 = 8192 * sizeof(struct pipe);
        VAR_7 = FUNC_4(sizeof(struct pipe), VAR_8, 4096, "pipe zone");



 VAR_6 = FUNC_2();
 VAR_5 = FUNC_1("pipe", VAR_6);


 VAR_4 = FUNC_0();




 VAR_8 = (VAR_0 + 20) *
     sizeof(struct pipe_garbage);
        VAR_3 = (zone_t)FUNC_4(sizeof(struct pipe_garbage),
     VAR_8, 4096, "pipe garbage zone");
 VAR_2 = FUNC_3(VAR_5, VAR_4);

}
