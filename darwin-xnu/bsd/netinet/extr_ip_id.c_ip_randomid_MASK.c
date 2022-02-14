
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int new_id ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (scalar_t__*,int) ;

uint16_t
FUNC_7(void)
{
 uint16_t VAR_10;






 if (VAR_2 == ((void*)0) || VAR_5 == 0)
  return (FUNC_3(VAR_4++));






 VAR_10 = 0;
 do {
  if (VAR_8 && VAR_10 != 0)
   VAR_7++;
  FUNC_6(&VAR_10, sizeof (VAR_10));
 } while (FUNC_2(VAR_3, VAR_10) || VAR_10 == 0);




 FUNC_4(&VAR_6);
 FUNC_0(VAR_3, VAR_2[VAR_1]);
 FUNC_1(VAR_3, VAR_10);
 VAR_2[VAR_1] = VAR_10;
 if (++VAR_1 == VAR_0)
  VAR_1 = 0;
 FUNC_5(&VAR_6);

 if (VAR_8)
  VAR_9++;

 return (VAR_10);
}
