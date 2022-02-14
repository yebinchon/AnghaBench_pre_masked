
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int* s6_addr32; char* s6_addr; } ;
struct TYPE_11__ {scalar_t__ pfxlen; TYPE_3__ addr; } ;
struct TYPE_12__ {TYPE_5__ a6; } ;
struct qeth_ipaddr {void* type; TYPE_6__ u; } ;
struct TYPE_10__ {scalar_t__ cq; char* hsuid; scalar_t__ sniffer; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct qeth_card {scalar_t__ state; TYPE_4__ options; TYPE_2__* dev; TYPE_1__ info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_8__ {int perm_addr; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 struct qeth_card* FUNC_1 (struct device*) ;
 int FUNC_2 (struct qeth_ipaddr*) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (struct qeth_card*,int ) ;
 int FUNC_5 (struct qeth_card*,struct qeth_ipaddr*) ;
 int FUNC_6 (struct qeth_card*,struct qeth_ipaddr*) ;
 struct qeth_ipaddr* FUNC_7 (int ) ;
 int FUNC_8 (struct qeth_card*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;
 char* FUNC_11 (char**,char*) ;

__attribute__((used)) static ssize_t FUNC_12(struct device *VAR_11,
  struct device_attribute *VAR_12, const char *VAR_13, size_t VAR_14)
{
 struct qeth_card *VAR_15 = FUNC_1(VAR_11);
 struct qeth_ipaddr *VAR_16;
 char *VAR_17;
 int VAR_18;

 if (!VAR_15)
  return -VAR_2;

 if (VAR_15->info.type != VAR_5)
  return -VAR_4;
 if (VAR_15->state != VAR_0 &&
     VAR_15->state != VAR_1)
  return -VAR_4;
 if (VAR_15->options.sniffer)
  return -VAR_4;
 if (VAR_15->options.cq == VAR_8)
  return -VAR_4;

 VAR_17 = FUNC_11((char **)&VAR_13, "\n");
 if (FUNC_9(VAR_17) > 8)
  return -VAR_2;

 if (VAR_15->options.hsuid[0]) {

  VAR_16 = FUNC_7(VAR_10);
  if (VAR_16 != ((void*)0)) {
   VAR_16->u.a6.addr.s6_addr32[0] = 0xfe800000;
   VAR_16->u.a6.addr.s6_addr32[1] = 0x00000000;
   for (VAR_18 = 8; VAR_18 < 16; VAR_18++)
    VAR_16->u.a6.addr.s6_addr[VAR_18] =
     VAR_15->options.hsuid[VAR_18 - 8];
   VAR_16->u.a6.pfxlen = 0;
   VAR_16->type = VAR_9;
  } else
   return -VAR_3;
  if (!FUNC_6(VAR_15, VAR_16))
   FUNC_2(VAR_16);
  FUNC_8(VAR_15);
 }

 if (FUNC_9(VAR_17) == 0) {

  VAR_15->options.hsuid[0] = '\0';
  if (VAR_15->dev)
   FUNC_3(VAR_15->dev->perm_addr, VAR_15->options.hsuid, 9);
  FUNC_4(VAR_15, VAR_6);
  return VAR_14;
 }

 if (FUNC_4(VAR_15, VAR_7))
  return -VAR_4;

 for (VAR_18 = 0; VAR_18 < 8; VAR_18++)
  VAR_15->options.hsuid[VAR_18] = ' ';
 VAR_15->options.hsuid[8] = '\0';
 FUNC_10(VAR_15->options.hsuid, VAR_17, FUNC_9(VAR_17));
 FUNC_0(VAR_15->options.hsuid, 8);
 if (VAR_15->dev)
  FUNC_3(VAR_15->dev->perm_addr, VAR_15->options.hsuid, 9);

 VAR_16 = FUNC_7(VAR_10);
 if (VAR_16 != ((void*)0)) {
  VAR_16->u.a6.addr.s6_addr32[0] = 0xfe800000;
  VAR_16->u.a6.addr.s6_addr32[1] = 0x00000000;
  for (VAR_18 = 8; VAR_18 < 16; VAR_18++)
   VAR_16->u.a6.addr.s6_addr[VAR_18] = VAR_15->options.hsuid[VAR_18 - 8];
  VAR_16->u.a6.pfxlen = 0;
  VAR_16->type = VAR_9;
 } else
  return -VAR_3;
 if (!FUNC_5(VAR_15, VAR_16))
  FUNC_2(VAR_16);
 FUNC_8(VAR_15);

 return VAR_14;
}
