
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int* data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct adb_request* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int* VAR_12 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct adb_request *VAR_13;

 VAR_13 = VAR_7;

 FUNC_0(VAR_13 == ((void*)0));

 FUNC_0(VAR_10 != VAR_9);







 VAR_6 = VAR_13->data[1];

 VAR_12[VAR_0] |= VAR_3;

 VAR_12[VAR_2] = VAR_13->data[1];

 VAR_12[VAR_1] = (VAR_12[VAR_1] & ~VAR_5) | VAR_4;

 VAR_10 = VAR_11;
 VAR_8 = 2;
}
