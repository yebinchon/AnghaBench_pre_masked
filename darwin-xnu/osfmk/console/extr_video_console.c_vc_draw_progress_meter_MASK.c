
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_width; int v_height; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char*** VAR_4 ;
 unsigned char*** VAR_5 ;
 unsigned char*** VAR_6 ;
 int FUNC_0 (int,int,int,int,int,int,int,unsigned char const*,int ,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static void
FUNC_1(unsigned int VAR_11, int VAR_12, int VAR_13, int VAR_14)
{
    const unsigned char * VAR_15;
    int VAR_16, VAR_17;
    int VAR_18, VAR_19;
    int VAR_20;
    int VAR_21;

    int VAR_22 = (0 == (2 & VAR_7));

    VAR_18 = ((VAR_10.v_width - (VAR_3 * VAR_9)) / 2);
    VAR_19 = VAR_10.v_height - (VAR_10.v_height / 3) - ((VAR_2 * VAR_9) / 2);

    if (VAR_0 == VAR_11)
    {

 FUNC_0(VAR_18 + VAR_12, VAR_19, VAR_12,
      VAR_13, (VAR_2 * VAR_9), 0, (VAR_3 * VAR_9),
      ((void*)0), VAR_8, VAR_11);
 return;
    }

    for (VAR_16 = VAR_12; VAR_16 < VAR_13; VAR_16 += VAR_17)
    {
 VAR_21 = (VAR_16 < VAR_14);
 VAR_20 = ((VAR_22 && VAR_21) ? VAR_14 : (VAR_3 * VAR_9));
 if (VAR_16 < (VAR_1 * VAR_9))
 {
     if (VAR_13 < (VAR_1 * VAR_9))
  VAR_17 = VAR_13 - VAR_16;
     else
  VAR_17 = (VAR_1 * VAR_9) - VAR_16;
     VAR_15 = VAR_4[VAR_9 >= 2][VAR_21];
     VAR_15 += VAR_16;
     FUNC_0(VAR_18 + VAR_16, VAR_19, VAR_16, VAR_17,
       (VAR_2 * VAR_9),
       (VAR_1 * VAR_9),
       (VAR_3 * VAR_9),
       VAR_15, VAR_8, VAR_11);
 }
 else if (VAR_16 < (VAR_20 - (VAR_1 * VAR_9)))
 {
     if (VAR_13 < (VAR_20 - (VAR_1 * VAR_9)))
  VAR_17 = VAR_13 - VAR_16;
     else
  VAR_17 = (VAR_20 - (VAR_1 * VAR_9)) - VAR_16;
     VAR_15 = VAR_5[VAR_9 >= 2][VAR_21];
     FUNC_0(VAR_18 + VAR_16, VAR_19, VAR_16, VAR_17,
       (VAR_2 * VAR_9),
       1,
       (VAR_3 * VAR_9),
       VAR_15, VAR_8, VAR_11);
 }
 else
 {
     VAR_17 = VAR_20 - VAR_16;
     VAR_15 = VAR_6[VAR_9 >= 2][VAR_21];
     VAR_15 += VAR_16 - (VAR_20 - (VAR_1 * VAR_9));
     FUNC_0(VAR_18 + VAR_16, VAR_19, VAR_16, VAR_17,
       (VAR_2 * VAR_9),
       (VAR_1 * VAR_9),
       (VAR_3 * VAR_9),
       VAR_15, VAR_8, VAR_11);
 }
    }
}
