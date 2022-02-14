
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx18_i2c_algo_callback_data {int bus_index; struct cx18* cx; } ;
struct cx18 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx18*,int) ;
 int FUNC_1 (struct cx18*,int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_3, int VAR_4)
{
 struct cx18 *VAR_5 = ((struct cx18_i2c_algo_callback_data *)VAR_3)->cx;
 int VAR_6 = ((struct cx18_i2c_algo_callback_data *)VAR_3)->bus_index;
 u32 VAR_7 = VAR_6 ? VAR_1 : VAR_0;
 u32 VAR_8 = FUNC_0(VAR_5, VAR_7);

 if (VAR_4)
  FUNC_1(VAR_5, VAR_8 | VAR_2, VAR_7);
 else
  FUNC_1(VAR_5, VAR_8 & ~VAR_2, VAR_7);
}
