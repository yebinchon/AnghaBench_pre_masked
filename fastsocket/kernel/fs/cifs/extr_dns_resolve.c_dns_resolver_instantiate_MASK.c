
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
struct TYPE_4__ {size_t* x; } ;
struct key {TYPE_1__ payload; TYPE_2__ type_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void const*,size_t) ;
 char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,void const*,size_t) ;

__attribute__((used)) static int
FUNC_3(struct key *VAR_3, const void *VAR_4,
  size_t VAR_5)
{
 int VAR_6 = 0;
 char *VAR_7;


 if (!FUNC_0(VAR_4, VAR_5))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5 + 1, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_2(VAR_7, VAR_4, VAR_5);
 VAR_7[VAR_5] = '\0';

 VAR_3->type_data.x[0] = VAR_5;
 VAR_3->payload.data = VAR_7;

 return VAR_6;
}
