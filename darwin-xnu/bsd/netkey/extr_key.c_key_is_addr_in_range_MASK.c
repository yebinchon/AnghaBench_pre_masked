
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct secpolicyaddrrange {int end; int start; } ;


 int FUNC_0 (struct sockaddr*,struct sockaddr*,int) ;

__attribute__((used)) static int
FUNC_1(struct sockaddr_storage *VAR_0, struct secpolicyaddrrange *VAR_1)
{
    int VAR_2 = 0;

    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
        return 0;


    VAR_2 = FUNC_0((struct sockaddr *)VAR_0, (struct sockaddr *)&VAR_1->start, 1);
    if (VAR_2 != 0 && VAR_2 != 1)
        return 0;


    VAR_2 = FUNC_0((struct sockaddr *)VAR_0, (struct sockaddr *)&VAR_1->end, 1);
    if (VAR_2 != 0 && VAR_2 != -1)
        return 0;

    return 1;
}
