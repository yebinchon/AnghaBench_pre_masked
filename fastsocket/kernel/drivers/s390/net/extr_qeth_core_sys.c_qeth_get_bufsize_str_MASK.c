
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int in_buf_size; } ;
struct qeth_card {TYPE_1__ qdio; } ;



__attribute__((used)) static inline const char *FUNC_0(struct qeth_card *VAR_0)
{
 if (VAR_0->qdio.in_buf_size == 16384)
  return "16k";
 else if (VAR_0->qdio.in_buf_size == 24576)
  return "24k";
 else if (VAR_0->qdio.in_buf_size == 32768)
  return "32k";
 else if (VAR_0->qdio.in_buf_size == 40960)
  return "40k";
 else
  return "64k";
}
