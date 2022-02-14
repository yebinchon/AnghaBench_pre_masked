
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
 int FUNC_0 (struct cx18*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_3)
{
 struct cx18 *VAR_4 = ((struct cx18_i2c_algo_callback_data *)VAR_3)->cx;
 int VAR_5 = ((struct cx18_i2c_algo_callback_data *)VAR_3)->bus_index;
 u32 VAR_6 = VAR_5 ? VAR_1 : VAR_0;

 return FUNC_0(VAR_4, VAR_6) & VAR_2;
}
