
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AS_Host ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,char) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(AS_Host *VAR_4, char *VAR_5, int *VAR_6, int VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9, VAR_10 = VAR_8;
 int VAR_11 = *VAR_6;

 while (VAR_11 < VAR_7) {
  VAR_9 = FUNC_0(VAR_4, VAR_2);

  if (VAR_9 & VAR_0) {
   VAR_10 = VAR_8;

   FUNC_1(VAR_4, VAR_3, VAR_5[VAR_11++]);
  } else if (VAR_9 & VAR_1)
   break;
  else if (--VAR_10 == 0)
   break;
  FUNC_2(1);
 }

 *VAR_6 = VAR_11;

 return (VAR_10 == 0) ? -1 : 0;
}
