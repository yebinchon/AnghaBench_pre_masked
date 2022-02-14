
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int FUNC_0 (struct parport*,unsigned char,unsigned int const) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct parport*,unsigned char,unsigned char) ;
 unsigned char FUNC_2 (struct parport*) ;

__attribute__((used)) static inline unsigned char FUNC_3(struct parport *VAR_4,
            unsigned char VAR_5,
            unsigned char VAR_6)
{
 const unsigned int VAR_7 =
  VAR_2 | VAR_0 | VAR_3 | VAR_1;
 FUNC_0(VAR_4, VAR_5, VAR_7);
 FUNC_0(VAR_4, VAR_6, VAR_7);
 FUNC_1(VAR_4, VAR_5 & VAR_7, VAR_6 & VAR_7);
 return FUNC_2(VAR_4);
}
