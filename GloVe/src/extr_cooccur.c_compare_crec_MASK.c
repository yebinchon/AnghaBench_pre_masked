
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int word1; int word2; } ;
typedef TYPE_1__ CREC ;



int FUNC_0(const void *VAR_0, const void *VAR_1) {
    int VAR_2;
    if ( (VAR_2 = ((CREC *) VAR_0)->word1 - ((CREC *) VAR_1)->word1) != 0) return VAR_2;
    else return (((CREC *) VAR_0)->word2 - ((CREC *) VAR_1)->word2);

}
