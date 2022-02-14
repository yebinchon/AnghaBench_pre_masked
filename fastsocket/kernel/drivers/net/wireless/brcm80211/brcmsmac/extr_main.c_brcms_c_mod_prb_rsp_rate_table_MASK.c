
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct brcms_c_rateset {size_t count; int* rates; } ;
struct brcms_c_info {int hw; TYPE_1__* stf; int band; } ;
struct TYPE_2__ {int txstreams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct brcms_c_info*,int,int ,size_t) ;
 int FUNC_3 (struct brcms_c_info*,int,size_t,int*) ;
 int FUNC_4 (struct brcms_c_rateset const*,struct brcms_c_rateset*) ;
 struct brcms_c_rateset* FUNC_5 (struct brcms_c_info*) ;
 int FUNC_6 (struct brcms_c_rateset*,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct brcms_c_info *VAR_5, uint VAR_6)
{
 const struct brcms_c_rateset *VAR_7;
 struct brcms_c_rateset VAR_8;
 u8 VAR_9;
 u16 VAR_10;
 u8 VAR_11[VAR_2];
 u16 VAR_12, VAR_13;
 uint VAR_14;

 VAR_13 = FUNC_7(VAR_5->band);

 VAR_7 = FUNC_5(VAR_5);

 FUNC_4(VAR_7, &VAR_8);
 FUNC_6(&VAR_8, VAR_5->stf->txstreams);





 for (VAR_14 = 0; VAR_14 < VAR_8.count; VAR_14++) {
  VAR_9 = VAR_8.rates[VAR_14] & VAR_1;

  VAR_10 = FUNC_0(VAR_5->hw, VAR_9);


  FUNC_3(VAR_5, VAR_9, VAR_6, VAR_11);





  VAR_12 = (u16) FUNC_2(VAR_5, VAR_9,
      VAR_0, VAR_6);
  VAR_12 += VAR_13;


  FUNC_1(VAR_5->hw, VAR_10 + VAR_4,
         (u16) (VAR_11[0] + (VAR_11[1] << 8)));
  FUNC_1(VAR_5->hw, VAR_10 + VAR_4 + 2,
         (u16) (VAR_11[2] + (VAR_11[3] << 8)));
  FUNC_1(VAR_5->hw, VAR_10 + VAR_3, VAR_12);
 }
}
