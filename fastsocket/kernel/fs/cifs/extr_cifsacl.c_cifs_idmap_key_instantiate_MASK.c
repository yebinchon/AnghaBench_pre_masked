
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char value; char* data; } ;
struct key {size_t datalen; TYPE_1__ payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,void const*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct key *VAR_2, const void *VAR_3, size_t VAR_4)
{
 char *VAR_5;
 if (VAR_4 <= sizeof(VAR_2->payload)) {
  VAR_2->payload.value = 0;
  FUNC_1(&VAR_2->payload.value, VAR_3, VAR_4);
  VAR_2->datalen = VAR_4;
  return 0;
 }
 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_3, VAR_4);
 VAR_2->payload.data = VAR_5;
 VAR_2->datalen = VAR_4;
 return 0;
}
