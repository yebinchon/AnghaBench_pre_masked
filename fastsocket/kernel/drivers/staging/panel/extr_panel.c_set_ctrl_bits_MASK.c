
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t e; size_t rs; size_t rw; size_t bl; size_t cl; size_t da; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 TYPE_1__ VAR_9 ;
 int*** VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_12, VAR_13;

 VAR_12 = FUNC_0(VAR_11);
 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
  VAR_12 &= VAR_10[VAR_8][VAR_13][VAR_0];

 VAR_12 |= VAR_10[VAR_8][VAR_5][VAR_9.e]
     | VAR_10[VAR_8][VAR_6][VAR_9.rs]
     | VAR_10[VAR_8][VAR_7][VAR_9.rw]
     | VAR_10[VAR_8][VAR_2][VAR_9.bl]
     | VAR_10[VAR_8][VAR_3][VAR_9.cl]
     | VAR_10[VAR_8][VAR_4][VAR_9.da];

 FUNC_1(VAR_11, VAR_12);
 return VAR_12;
}
