
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ESIFC ;


 size_t VAR_0 ;
 size_t VAR_1 ;

inline const char* FUNC_0(ESIFC VAR_2)
{
 static const char * const VAR_3[] =
 {
  "<none>",
  "Arkanoid Paddle",
  "Hyper Shot gun",
  "4-Player Adapter",
  "Family Keyboard",
  "Subor Keyboard",
  "PEC586 Keyboard",
  "HyperShot Pads",
  "Mahjong",
  "Quiz King Buzzers",
  "Family Trainer A",
  "Family Trainer B",
  "Oeka Kids Tablet",
  "Barcode World",
  "Top Rider"
 };

 if(VAR_2 >= VAR_1 && VAR_2 <= VAR_0)
  return VAR_3[VAR_2];
 else return "<invalid ESIFC>";
}
