
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int tcflag_t ;
struct tty {int t_column; int t_outq; int t_lflag; scalar_t__ t_outcc; int t_oflag; } ;



 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;

 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;


 int VAR_9 ;
 int FUNC_3 (struct tty*) ;
 scalar_t__ FUNC_4 (int const*,int,int *) ;
 scalar_t__ FUNC_5 (int,int *) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int
FUNC_6(int VAR_11, struct tty *VAR_12)
{
 tcflag_t VAR_13;
 int VAR_14;

 FUNC_3(VAR_12);

 VAR_13 = VAR_12->t_oflag;
 if (!FUNC_2(VAR_13, VAR_7)) {
  if (FUNC_2(VAR_12->t_lflag, VAR_2))
   return (-1);
  if (FUNC_5(VAR_11, &VAR_12->t_outq))
   return (VAR_11);
  VAR_10++;
  VAR_12->t_outcc++;
  return (-1);
 }






 FUNC_1(VAR_11, ~VAR_9);
 if (VAR_11 == '\t' &&
     FUNC_2(VAR_13, VAR_8) && !FUNC_2(VAR_12->t_lflag, VAR_1)) {
  VAR_14 = VAR_11 = 8 - (VAR_12->t_column & 7);
  if (!FUNC_2(VAR_12->t_lflag, VAR_2)) {
   VAR_11 -= FUNC_4((const u_char *)"        ", VAR_11, &VAR_12->t_outq);
   VAR_10 += VAR_11;
   VAR_12->t_outcc += VAR_11;
  }
  VAR_12->t_column += VAR_11;
  return (VAR_11 == VAR_14 ? -1 : '\t');
 }
 if (VAR_11 == VAR_0 && FUNC_2(VAR_13, VAR_6))
  return (-1);





 if (VAR_11 == '\n' && FUNC_2(VAR_12->t_oflag, VAR_4)) {
  VAR_10++;
  VAR_12->t_outcc++;
  if (FUNC_5('\r', &VAR_12->t_outq))
   return (VAR_11);
 }

        else if (VAR_11 == '\r' && FUNC_2(VAR_12->t_oflag, VAR_3))
                VAR_11 = '\n';

        else if (VAR_11 == '\r' && FUNC_2(VAR_12->t_oflag, VAR_5) && VAR_12->t_column == 0)
                return (-1);
 VAR_10++;
 VAR_12->t_outcc++;
 if (!FUNC_2(VAR_12->t_lflag, VAR_2) && FUNC_5(VAR_11, &VAR_12->t_outq))
  return (VAR_11);

 VAR_14 = VAR_12->t_column;
 switch (FUNC_0(VAR_11)) {
 case 133:
  if (VAR_14 > 0)
   --VAR_14;
  break;
 case 132:
  break;
 case 131:
 case 129:
  VAR_14 = 0;
  break;
 case 130:
  ++VAR_14;
  break;
 case 128:
  VAR_14 = (VAR_14 + 8) & ~7;
  break;
 }
 VAR_12->t_column = VAR_14;
 return (-1);
}
