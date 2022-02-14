
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct us_data*,int,unsigned long,int,int,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_2(struct us_data *VAR_1, unsigned long VAR_2,
       int VAR_3, int VAR_4, unsigned char *VAR_5, int VAR_6) {

 int VAR_7 = (VAR_3 << VAR_4) + (VAR_3 << VAR_0);
 FUNC_0("sddr09_read22: reading %d pages, %d bytes\n",
    VAR_3, VAR_7);
 return FUNC_1(VAR_1, 2, VAR_2, VAR_3, VAR_7,
       VAR_5, VAR_6);
}
