
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ide_device {int* upperhalf; int cycle; int data; int do_8bit; } ;


 void* FUNC_0 (struct ide_device*,int ) ;
 int FUNC_1 (struct ide_device*,int) ;

__attribute__((used)) static uint8_t FUNC_2(struct ide_device *VAR_0, int VAR_1) {
    uint16_t VAR_2;

    VAR_1 &= 15;

    if (VAR_1 == 0) {
        if (!VAR_0->do_8bit) {
            VAR_2 = FUNC_0(VAR_0, 0);
            VAR_0->upperhalf[0] = VAR_2 & 0xff00;
            return VAR_2;
        }
        if (!VAR_0->cycle) {
            VAR_0->data = FUNC_0(VAR_0, 0);
            VAR_2 = VAR_0->data & 0xff;
        } else {
            VAR_2 = VAR_0->data >> 8;
        }
        VAR_0->cycle = !VAR_0->cycle;
        return VAR_2;
    } else if (VAR_1 >= 8) {
        return VAR_0->upperhalf[VAR_1-8] >> 8;
    } else {
        VAR_2 = FUNC_1(VAR_0, VAR_1);
        VAR_0->upperhalf[VAR_1] = VAR_2 & 0xff00;
        return VAR_2;
    }
}
