
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qib_message_header {int dummy; } ;
struct qib_devdata {int dummy; } ;
typedef int __le32 ;



__attribute__((used)) static struct qib_message_header *
FUNC_0(struct qib_devdata *VAR_0, __le32 *VAR_1)
{
 return (struct qib_message_header *)
  &VAR_1[sizeof(u64) / sizeof(u32)];
}
