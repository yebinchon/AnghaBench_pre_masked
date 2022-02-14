
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ checksum_type; } ;
struct qeth_card {TYPE_1__ options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static const char *FUNC_0(struct qeth_card *VAR_2)
{
 if (VAR_2->options.checksum_type == VAR_1)
  return "sw";
 else if (VAR_2->options.checksum_type == VAR_0)
  return "hw";
 else
  return "no";
}
