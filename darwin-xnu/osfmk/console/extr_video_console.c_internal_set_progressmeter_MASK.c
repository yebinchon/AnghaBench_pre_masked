
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_1(int VAR_9)
{
    int VAR_10, VAR_11;
    int VAR_12;

    int VAR_13 = (0 == (2 & VAR_4));

    if ((VAR_9 < 0) || (VAR_9 > VAR_3)) return;

    if (VAR_6)
    {
 VAR_7 = VAR_9;

 VAR_12 = (VAR_13 ? (VAR_1 * VAR_8) : 0);
 VAR_11 = (((VAR_2 * VAR_8) - 2 * VAR_12) * VAR_7) / VAR_3;
 VAR_11 += (2 * VAR_12);

 if (VAR_11 > VAR_5)
 {
     VAR_10 = VAR_12;
     if (VAR_10 > VAR_5) VAR_10 = VAR_5;
     FUNC_0(VAR_0, VAR_5 - VAR_10, VAR_11, VAR_11);
        }
 else
 {
     FUNC_0(VAR_0, VAR_11 - VAR_12, VAR_5, VAR_11);
 }
 VAR_5 = VAR_11;
    }
}
