
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct niu {TYPE_1__* parent; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;
struct TYPE_2__ {scalar_t__* tcam_key; scalar_t__* flow_key; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int,scalar_t__*) ;
 int FUNC_4 (struct niu*,unsigned long) ;
 int FUNC_5 (struct niu*,unsigned long) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct niu *VAR_5, struct ethtool_rxnfc *VAR_6)
{
 u64 VAR_7;
 u64 VAR_8 = 0;
 unsigned long VAR_9;

 if (!FUNC_2(VAR_6->flow_type, &VAR_7))
  return -VAR_2;

 if (VAR_7 < VAR_1 ||
     VAR_7 > VAR_0)
  return -VAR_2;

 if (VAR_6->data & VAR_3) {
  FUNC_4(VAR_5, VAR_9);
  VAR_8 = VAR_5->parent->tcam_key[VAR_7 -
            VAR_1];
  VAR_8 |= VAR_4;
  FUNC_6(FUNC_1(VAR_7 - VAR_1), VAR_8);
  VAR_5->parent->tcam_key[VAR_7 - VAR_1] = VAR_8;
  FUNC_5(VAR_5, VAR_9);
  return 0;
 } else {

  if (VAR_5->parent->tcam_key[VAR_7 - VAR_1] &
      VAR_4) {
   FUNC_4(VAR_5, VAR_9);
   VAR_8 = VAR_5->parent->tcam_key[VAR_7 -
            VAR_1];
   VAR_8 &= ~VAR_4;
   FUNC_6(FUNC_1(VAR_7 - VAR_1),
        VAR_8);
   VAR_5->parent->tcam_key[VAR_7 - VAR_1] =
    VAR_8;
   FUNC_5(VAR_5, VAR_9);
  }
 }

 if (!FUNC_3(VAR_6->data, &VAR_8))
  return -VAR_2;

 FUNC_4(VAR_5, VAR_9);
 FUNC_6(FUNC_0(VAR_7 - VAR_1), VAR_8);
 VAR_5->parent->flow_key[VAR_7 - VAR_1] = VAR_8;
 FUNC_5(VAR_5, VAR_9);

 return 0;
}
