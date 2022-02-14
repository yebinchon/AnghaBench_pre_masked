
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ upf_t ;
struct uart_port {scalar_t__ flags; } ;
struct ktermios {int c_cflag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (struct ktermios*) ;
 int FUNC_1 (struct ktermios*,int,int) ;

unsigned int
FUNC_2(struct uart_port *VAR_6, struct ktermios *VAR_7,
     struct ktermios *VAR_8, unsigned int VAR_9, unsigned int VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13 = 38400;
 int VAR_14 = 0;
 upf_t VAR_15 = VAR_6->flags & VAR_2;

 if (VAR_15 == VAR_1)
  VAR_13 = 57600;
 if (VAR_15 == VAR_4)
  VAR_13 = 115200;
 if (VAR_15 == VAR_3)
  VAR_13 = 230400;
 if (VAR_15 == VAR_5)
  VAR_13 = 460800;

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  VAR_12 = FUNC_0(VAR_7);





  if (VAR_12 == 38400)
   VAR_12 = VAR_13;




  if (VAR_12 == 0) {
   VAR_14 = 1;
   VAR_12 = 9600;
  }

  if (VAR_12 >= VAR_9 && VAR_12 <= VAR_10)
   return VAR_12;





  VAR_7->c_cflag &= ~VAR_0;
  if (VAR_8) {
   VAR_12 = FUNC_0(VAR_8);
   if (!VAR_14)
    FUNC_1(VAR_7,
        VAR_12, VAR_12);
   VAR_8 = ((void*)0);
   continue;
  }





  if (!VAR_14)
   FUNC_1(VAR_7, 9600, 9600);
 }

 return 0;
}
