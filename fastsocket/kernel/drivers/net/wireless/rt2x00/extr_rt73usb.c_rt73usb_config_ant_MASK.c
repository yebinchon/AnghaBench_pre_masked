
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
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct antenna_sel* VAR_12 ;
 struct antenna_sel* VAR_13 ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_6 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_7 (struct rt2x00_dev*,struct antenna_setup*) ;
 int FUNC_8 (struct rt2x00_dev*,struct antenna_setup*) ;
 unsigned int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct rt2x00_dev *VAR_14,
          struct antenna_setup *VAR_15)
{
 const struct antenna_sel *VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 u32 VAR_19;





 FUNC_1(VAR_15->rx == VAR_0 ||
        VAR_15->tx == VAR_0);

 if (VAR_14->curr_band == VAR_4) {
  VAR_16 = VAR_12;
  VAR_17 = FUNC_9(VAR_1, &VAR_14->cap_flags);
 } else {
  VAR_16 = VAR_13;
  VAR_17 = FUNC_9(VAR_2, &VAR_14->cap_flags);
 }

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_12); VAR_18++)
  FUNC_6(VAR_14, VAR_16[VAR_18].word, VAR_16[VAR_18].value[VAR_17]);

 FUNC_4(VAR_14, VAR_5, &VAR_19);

 FUNC_3(&VAR_19, VAR_7,
      (VAR_14->curr_band == VAR_3));
 FUNC_3(&VAR_19, VAR_6,
      (VAR_14->curr_band == VAR_4));

 FUNC_5(VAR_14, VAR_5, VAR_19);

 if (FUNC_2(VAR_14, VAR_11) || FUNC_2(VAR_14, VAR_10))
  FUNC_8(VAR_14, VAR_15);
 else if (FUNC_2(VAR_14, VAR_9) || FUNC_2(VAR_14, VAR_8))
  FUNC_7(VAR_14, VAR_15);
}
