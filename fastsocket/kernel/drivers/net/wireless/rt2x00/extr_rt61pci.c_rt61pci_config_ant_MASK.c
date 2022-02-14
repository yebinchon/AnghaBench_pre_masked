
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {scalar_t__ curr_band; int cap_flags; } ;
struct antenna_setup {scalar_t__ rx; scalar_t__ tx; } ;
struct antenna_sel {int * value; int word; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct antenna_sel*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct antenna_sel* VAR_13 ;
 struct antenna_sel* VAR_14 ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_7 (struct rt2x00_dev*,struct antenna_setup*) ;
 int FUNC_8 (struct rt2x00_dev*,struct antenna_setup*) ;
 int FUNC_9 (struct rt2x00_dev*,struct antenna_setup*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct rt2x00_dev *VAR_15,
          struct antenna_setup *VAR_16)
{
 const struct antenna_sel *VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 u32 VAR_20;





 FUNC_1(VAR_16->rx == VAR_0 ||
        VAR_16->tx == VAR_0);

 if (VAR_15->curr_band == VAR_5) {
  VAR_17 = VAR_13;
  VAR_18 = FUNC_10(VAR_2, &VAR_15->cap_flags);
 } else {
  VAR_17 = VAR_14;
  VAR_18 = FUNC_10(VAR_3, &VAR_15->cap_flags);
 }

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_13); VAR_19++)
  FUNC_6(VAR_15, VAR_17[VAR_19].word, VAR_17[VAR_19].value[VAR_18]);

 FUNC_4(VAR_15, VAR_6, &VAR_20);

 FUNC_3(&VAR_20, VAR_8,
      VAR_15->curr_band == VAR_4);
 FUNC_3(&VAR_20, VAR_7,
      VAR_15->curr_band == VAR_5);

 FUNC_5(VAR_15, VAR_6, VAR_20);

 if (FUNC_2(VAR_15, VAR_11) || FUNC_2(VAR_15, VAR_12))
  FUNC_9(VAR_15, VAR_16);
 else if (FUNC_2(VAR_15, VAR_9))
  FUNC_8(VAR_15, VAR_16);
 else if (FUNC_2(VAR_15, VAR_10)) {
  if (FUNC_10(VAR_1, &VAR_15->cap_flags))
   FUNC_8(VAR_15, VAR_16);
  else
   FUNC_7(VAR_15, VAR_16);
 }
}
