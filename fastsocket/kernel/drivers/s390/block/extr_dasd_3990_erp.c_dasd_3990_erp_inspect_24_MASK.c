
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_ccw_req {int dummy; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 struct dasd_ccw_req* FUNC_0 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_1 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_2 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_3 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_4 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_5 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_6 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_7 (struct dasd_ccw_req*) ;
 struct dasd_ccw_req* FUNC_8 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_9 (struct dasd_ccw_req*,char*) ;
 struct dasd_ccw_req* FUNC_10 (struct dasd_ccw_req*,char*) ;

__attribute__((used)) static struct dasd_ccw_req *
FUNC_11(struct dasd_ccw_req * VAR_11, char *VAR_12)
{

 struct dasd_ccw_req *VAR_13 = ((void*)0);



 if ((VAR_13 == ((void*)0)) && (VAR_12[0] & VAR_1)) {
  VAR_13 = FUNC_2(VAR_11, VAR_12);
 }

 if ((VAR_13 == ((void*)0)) && (VAR_12[0] & VAR_4)) {
  VAR_13 = FUNC_7(VAR_11);
 }

 if ((VAR_13 == ((void*)0)) && (VAR_12[0] & VAR_0)) {
  VAR_13 = FUNC_1(VAR_11);
 }

 if ((VAR_13 == ((void*)0)) && (VAR_12[0] & VAR_3)) {
  VAR_13 = FUNC_5(VAR_11, VAR_12);
 }

 if ((VAR_13 == ((void*)0)) && (VAR_12[0] & VAR_2)) {
  VAR_13 = FUNC_3(VAR_11, VAR_12);
 }

 if ((VAR_13 == ((void*)0)) && (VAR_12[0] & VAR_5)) {
  VAR_13 = FUNC_10(VAR_11, VAR_12);
 }

 if ((VAR_13 == ((void*)0)) && (VAR_12[1] & VAR_8)) {
  VAR_13 = FUNC_8(VAR_11, VAR_12);
 }

 if ((VAR_13 == ((void*)0)) && (VAR_12[1] & VAR_6)) {
  VAR_13 = FUNC_0(VAR_11, VAR_12);
 }

 if ((VAR_13 == ((void*)0)) && (VAR_12[2] & VAR_10)) {
  VAR_13 = FUNC_4(VAR_11, VAR_12);
 }

 if ((VAR_13 == ((void*)0)) && (VAR_12[1] & VAR_9)) {
  VAR_13 = FUNC_9(VAR_11, VAR_12);
 }

 if ((VAR_13 == ((void*)0)) && (VAR_12[1] & VAR_7)) {
  VAR_13 = FUNC_6(VAR_11);
 }

 if (VAR_13 == ((void*)0)) {

  VAR_13 = VAR_11;
 }

 return VAR_13;

}
