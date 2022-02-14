
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ProgressData {int width; size_t bar; int tick; size_t barmove; int out; } ;
typedef int buf ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,char*,int,char*) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ProgressData *VAR_1, bool VAR_2)
{
  char VAR_3[256];
  int VAR_4;
  int VAR_5 = VAR_1->width - 2;

  FUNC_2(VAR_3, sizeof(VAR_3), "%*s\r", VAR_1->width-1, " ");
  FUNC_1(&VAR_3[VAR_1->bar], "-=O=-", 5);

  VAR_4 = VAR_0[VAR_1->tick%200] / (10000 / VAR_5);
  VAR_3[VAR_4] = '#';
  VAR_4 = VAR_0[(VAR_1->tick + 5)%200] / (10000 / VAR_5);
  VAR_3[VAR_4] = '#';
  VAR_4 = VAR_0[(VAR_1->tick + 10)%200] / (10000 / VAR_5);
  VAR_3[VAR_4] = '#';
  VAR_4 = VAR_0[(VAR_1->tick + 15)%200] / (10000 / VAR_5);
  VAR_3[VAR_4] = '#';

  FUNC_0(VAR_3, VAR_1->out);
  VAR_1->tick += 2;
  if(VAR_1->tick >= 200)
    VAR_1->tick -= 200;

  VAR_1->bar += (VAR_2?VAR_1->barmove:0);
  if(VAR_1->bar >= (VAR_1->width - 6)) {
    VAR_1->barmove = -1;
    VAR_1->bar = VAR_1->width - 6;
  }
  else if(VAR_1->bar < 0) {
    VAR_1->barmove = 1;
    VAR_1->bar = 0;
  }
}
