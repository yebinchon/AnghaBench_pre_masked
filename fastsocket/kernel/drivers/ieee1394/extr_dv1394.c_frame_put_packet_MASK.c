
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet {int* data; } ;
struct frame {scalar_t__ data; } ;


 int FUNC_0 (void*,int*,int) ;

__attribute__((used)) static void inline
FUNC_1 (struct frame *VAR_0, struct packet *VAR_1)
{
 int VAR_2 = VAR_1->data[0] >> 5;
 int VAR_3 = VAR_1->data[1] >> 4;
 int VAR_4 = VAR_1->data[2];


 if (VAR_3 > 11 || VAR_4 > 149) return;

 switch (VAR_2) {
 case 0:
         FUNC_0( (void *) VAR_0->data + VAR_3 * 150 * 80, VAR_1->data, 480);
         break;

 case 1:
         FUNC_0( (void *) VAR_0->data + VAR_3 * 150 * 80 + (1 + VAR_4) * 80, VAR_1->data, 480);
         break;

 case 2:
         FUNC_0( (void *) VAR_0->data + VAR_3 * 150 * 80 + (3 + VAR_4) * 80, VAR_1->data, 480);
         break;

 case 3:
         FUNC_0( (void *) VAR_0->data + VAR_3 * 150 * 80 + (6 + VAR_4 * 16) * 80, VAR_1->data, 480);
         break;

 case 4:
         FUNC_0( (void *) VAR_0->data + VAR_3 * 150 * 80 + (7 + (VAR_4 / 15) + VAR_4) * 80, VAR_1->data, 480);
         break;

 default:
         break;
 }
}
