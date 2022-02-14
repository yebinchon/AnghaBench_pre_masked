
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {int dummy; } ;
struct analog_parameters {int std; scalar_t__ mode; int frequency; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,int ) ;
 int FUNC_1 (struct dvb_frontend*,int,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_3,
         struct analog_parameters *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4->std & VAR_0) {

  VAR_5 = 45750*1000;
 } else {

  VAR_5 = 38900*1000;
 }
 if (VAR_1 == VAR_4->mode) {

  VAR_5 = 36150*1000;
 }
 FUNC_1(VAR_3, VAR_4->frequency*62500, VAR_5);
 FUNC_0(VAR_3, VAR_2);

 return 0;
}
