
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int base_addr; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(struct net_device * VAR_3,
      int VAR_4,
      char * VAR_5,
      int VAR_6)
{
  unsigned int VAR_7 = VAR_3->base_addr;
  int VAR_8 = VAR_4;
  int VAR_9;
  char * VAR_10 = VAR_5;


  while(VAR_6 > 0)
    {

      FUNC_4(VAR_8 & 0xff, FUNC_2(VAR_7));
      FUNC_4(((VAR_8 >> 8) & VAR_0), FUNC_1(VAR_7));



      if((VAR_4 + VAR_6) < (VAR_1 + VAR_2))
 VAR_9 = VAR_6;
      else
 VAR_9 = VAR_1 + VAR_2 - VAR_4;
      FUNC_3(FUNC_0(VAR_7), VAR_10, VAR_9);
      VAR_10 += VAR_9;
      VAR_6 -= VAR_9;
      VAR_8 = (VAR_8 - VAR_1 + VAR_9) % VAR_2 + VAR_1;
    }
  return(VAR_8);
}
