
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* blockbox; } ;
typedef TYPE_1__ sector_t ;
typedef int boolean ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;

boolean
FUNC_1
( sector_t* VAR_7,
  boolean VAR_8 )
{
    int VAR_9;
    int VAR_10;

    VAR_6 = 0;
    VAR_5 = VAR_8;


    for (VAR_9=VAR_7->blockbox[VAR_1] ; VAR_9<= VAR_7->blockbox[VAR_2] ; VAR_9++)
 for (VAR_10=VAR_7->blockbox[VAR_0];VAR_10<= VAR_7->blockbox[VAR_3] ; VAR_10++)
     FUNC_0 (VAR_9, VAR_10, VAR_4);


    return VAR_6;
}
