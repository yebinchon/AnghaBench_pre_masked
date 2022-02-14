
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ range_action ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(range_action VAR_3, unsigned int VAR_4,
      unsigned int VAR_5, unsigned int VAR_6,
      unsigned int VAR_7, int VAR_8)
{
 if ((VAR_4 > VAR_5) || ((VAR_4 == VAR_5) && (VAR_6 > VAR_7))) {
  if (VAR_8)
   FUNC_1("0.%x.%04x to 0.%x.%04x is not a valid "
       "range for cio_ignore\n", VAR_4, VAR_6,
       VAR_5, VAR_7);

  return 1;
 }

 while ((VAR_4 < VAR_5) || ((VAR_4 == VAR_5) &&
        (VAR_6 <= VAR_7))) {
  if (VAR_3 == VAR_1)
   FUNC_2(VAR_6, VAR_2[VAR_4]);
  else
   FUNC_0(VAR_6, VAR_2[VAR_4]);
  VAR_6++;
  if (VAR_6 > VAR_0) {
   VAR_4++;
   VAR_6 = 0;
  }
 }

 return 0;
}
