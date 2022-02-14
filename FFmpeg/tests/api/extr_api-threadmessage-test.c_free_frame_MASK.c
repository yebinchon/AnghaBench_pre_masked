
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {scalar_t__ magic; int frame; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_1)
{
    struct message *VAR_2 = VAR_1;
    FUNC_0(VAR_2->magic == VAR_0);
    FUNC_1(&VAR_2->frame);
}
