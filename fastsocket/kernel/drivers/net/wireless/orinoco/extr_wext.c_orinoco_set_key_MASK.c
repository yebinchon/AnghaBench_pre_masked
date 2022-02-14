
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct orinoco_private {TYPE_1__* keys; } ;
typedef enum orinoco_alg { ____Placeholder_orinoco_alg } orinoco_alg ;
struct TYPE_2__ {int key_len; int seq_len; scalar_t__ cipher; int * key; int * seq; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_4(struct orinoco_private *VAR_6, int VAR_7,
      enum orinoco_alg VAR_8, const u8 *VAR_9, int VAR_10,
      const u8 *VAR_11, int VAR_12)
{
 FUNC_2(VAR_6->keys[VAR_7].key);
 FUNC_2(VAR_6->keys[VAR_7].seq);

 if (VAR_10) {
  VAR_6->keys[VAR_7].key = FUNC_1(VAR_10, VAR_1);
  if (!VAR_6->keys[VAR_7].key)
   goto nomem;
 } else
  VAR_6->keys[VAR_7].key = ((void*)0);

 if (VAR_12) {
  VAR_6->keys[VAR_7].seq = FUNC_1(VAR_12, VAR_1);
  if (!VAR_6->keys[VAR_7].seq)
   goto free_key;
 } else
  VAR_6->keys[VAR_7].seq = ((void*)0);

 VAR_6->keys[VAR_7].key_len = VAR_10;
 VAR_6->keys[VAR_7].seq_len = VAR_12;

 if (VAR_10)
  FUNC_3(VAR_6->keys[VAR_7].key, VAR_9, VAR_10);
 if (VAR_12)
  FUNC_3(VAR_6->keys[VAR_7].seq, VAR_11, VAR_12);

 switch (VAR_8) {
 case 129:
  VAR_6->keys[VAR_7].cipher = VAR_3;
  break;

 case 128:
  VAR_6->keys[VAR_7].cipher = (VAR_10 > VAR_2) ?
   VAR_4 : VAR_5;
  break;

 case 130:
 default:
  VAR_6->keys[VAR_7].cipher = 0;
  break;
 }

 return 0;

free_key:
 FUNC_0(VAR_6->keys[VAR_7].key);
 VAR_6->keys[VAR_7].key = ((void*)0);

nomem:
 VAR_6->keys[VAR_7].key_len = 0;
 VAR_6->keys[VAR_7].seq_len = 0;
 VAR_6->keys[VAR_7].cipher = 0;

 return -VAR_0;
}
