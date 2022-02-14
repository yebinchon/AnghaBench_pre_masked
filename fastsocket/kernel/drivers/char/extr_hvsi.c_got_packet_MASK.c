
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct hvsi_struct {int * inbuf_end; } ;
struct hvsi_header {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(const struct hvsi_struct *VAR_0, uint8_t *VAR_1)
{
 if (VAR_0->inbuf_end < VAR_1 + sizeof(struct hvsi_header))
  return 0;

 if (VAR_0->inbuf_end < (VAR_1 + FUNC_0(VAR_1)))
  return 0;

 return 1;
}
