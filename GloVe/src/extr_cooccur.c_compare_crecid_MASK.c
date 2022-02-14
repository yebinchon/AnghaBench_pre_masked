
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int word1; int word2; } ;
typedef TYPE_1__ CRECID ;



int FUNC_0(CRECID VAR_0, CRECID VAR_1) {
    int VAR_2;
    if ( (VAR_2 = VAR_0.word1 - VAR_1.word1) != 0) return VAR_2;
    else return VAR_0.word2 - VAR_1.word2;
}
