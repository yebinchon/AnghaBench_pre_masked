
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct hso_serial* driver_data; } ;
struct hso_serial {int dummy; } ;



__attribute__((used)) static inline struct hso_serial *FUNC_0(struct tty_struct *VAR_0)
{
 if (VAR_0)
  return VAR_0->driver_data;
 return ((void*)0);
}
