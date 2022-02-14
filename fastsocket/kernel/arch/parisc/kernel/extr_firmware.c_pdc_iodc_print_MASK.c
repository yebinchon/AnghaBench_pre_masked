
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* layers; } ;
struct TYPE_5__ {TYPE_1__ dp; int spa; scalar_t__ hpa; int iodc_io; } ;
struct TYPE_6__ {TYPE_2__ mem_cons; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (char*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,unsigned long,int ,int ,int ,int ,int ,int ,unsigned int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(const unsigned char *VAR_5, unsigned VAR_6)
{
 static int VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6 && VAR_8 < 79;) {
  switch(VAR_5[VAR_8]) {
  case '\n':
   VAR_2[VAR_8+0] = '\r';
   VAR_2[VAR_8+1] = '\n';
   VAR_8 += 2;
   VAR_7 = 0;
   goto print;
  case '\t':
   while (VAR_7 & 7) {
    VAR_2[VAR_8] = ' ';
    VAR_8++, VAR_7++;
   }
   break;
  case '\b':
   VAR_7 -= 2;
  default:
   VAR_2[VAR_8] = VAR_5[VAR_8];
   VAR_8++, VAR_7++;
   break;
  }
 }





 if (VAR_8 == 79 && VAR_2[VAR_8-1] != '\n') {
  VAR_2[VAR_8+0] = '\r';
  VAR_2[VAR_8+1] = '\n';
 }

print:
        FUNC_2(&VAR_4, VAR_9);
        FUNC_1(VAR_1->mem_cons.iodc_io,
                    (unsigned long)VAR_1->mem_cons.hpa, VAR_0,
                    VAR_1->mem_cons.spa, FUNC_0(VAR_1->mem_cons.dp.layers),
                    FUNC_0(VAR_3), 0, FUNC_0(VAR_2), VAR_8, 0);
        FUNC_3(&VAR_4, VAR_9);

 return VAR_8;
}
