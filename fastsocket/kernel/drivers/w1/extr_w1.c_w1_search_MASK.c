
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* w1_slave_found_callback ) (struct w1_master*,int) ;
typedef int u8 ;
typedef int u64 ;
struct w1_master {int dev; int max_slave_count; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct w1_master*) ;
 int FUNC_3 (struct w1_master*,int) ;
 int FUNC_4 (struct w1_master*,int) ;

void FUNC_5(struct w1_master *VAR_0, u8 VAR_1, w1_slave_found_callback VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7 = 0;
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;
 u8 VAR_12 = 0;

 VAR_10 = 0;
 VAR_4 = VAR_3 = 0;
 VAR_9 = 0;
 VAR_8 = -1;

 VAR_11 = 64;

 while ( !VAR_9 && (VAR_7++ < VAR_0->max_slave_count) ) {
  VAR_3 = VAR_4;
  VAR_4 = 0;







  if (FUNC_2(VAR_0)) {
   FUNC_0(&VAR_0->dev, "No devices present on the wire.\n");
   break;
  }


  FUNC_4(VAR_0, VAR_1);
  for (VAR_6 = 0; VAR_6 < 64; ++VAR_6) {

   if (VAR_6 == VAR_11)
    VAR_10 = 1;
   else if (VAR_6 > VAR_11)
    VAR_10 = 0;
   else
    VAR_10 = ((VAR_3 >> VAR_6) & 0x1);


   VAR_12 = FUNC_3(VAR_0, VAR_10);


   if ( (VAR_12 & 0x03) == 0x03 )
    break;


   if (VAR_12 == 0)
    VAR_8 = VAR_6;


   VAR_5 = (VAR_12 >> 2);
   VAR_4 |= (VAR_5 << VAR_6);

   if (FUNC_1()) {
    FUNC_0(&VAR_0->dev, "Abort w1_search\n");
    return;
   }
  }

  if ( (VAR_12 & 0x03) != 0x03 ) {
   if ( (VAR_11 == VAR_8) || (VAR_8 < 0))
    VAR_9 = 1;
   VAR_11 = VAR_8;
   VAR_2(VAR_0, VAR_4);
  }
 }
}
