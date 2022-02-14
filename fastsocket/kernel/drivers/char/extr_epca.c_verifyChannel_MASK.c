
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct channel* driver_data; } ;
struct channel {scalar_t__ magic; } ;


 scalar_t__ VAR_0 ;
 struct channel* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static struct channel *FUNC_0(struct tty_struct *VAR_3)
{






 if (VAR_3) {
  struct channel *VAR_4 = VAR_3->driver_data;
  if (VAR_4 >= &VAR_1[0] && VAR_4 < &VAR_1[VAR_2]) {
   if (VAR_4->magic == VAR_0)
    return VAR_4;
  }
 }
 return ((void*)0);
}
