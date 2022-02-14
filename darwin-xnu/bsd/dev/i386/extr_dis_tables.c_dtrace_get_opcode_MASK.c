
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_3__ {int d86_len; int d86_error; int (* d86_get_byte ) (int ) ;int* d86_bytes; int d86_data; } ;
typedef TYPE_1__ dis86_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(dis86_t *VAR_0, uint_t *VAR_1, uint_t *VAR_2)
{
 int VAR_3;





 if (VAR_0->d86_len >= 15)
  return (VAR_0->d86_error = 1);

 if (VAR_0->d86_error)
  return (1);
 VAR_3 = VAR_0->d86_get_byte(VAR_0->d86_data);
 if (VAR_3 < 0)
  return (VAR_0->d86_error = 1);
 VAR_0->d86_bytes[VAR_0->d86_len++] = VAR_3;
 *VAR_2 = VAR_3 & 0xf;
 *VAR_1 = VAR_3 >> 4 & 0xf;
 return (0);
}
