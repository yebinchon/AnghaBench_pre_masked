
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ide_device {int* upperhalf; int cycle; int data; int do_8bit; } ;


 int FUNC_0 (struct ide_device*,int ,int) ;
 int FUNC_1 (struct ide_device*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ide_device *VAR_0, int VAR_1, uint8_t VAR_2) {
    VAR_1 &= 15;

    if (VAR_1 == 0) {
        if (!VAR_0->do_8bit) {
            FUNC_0(VAR_0, 0, VAR_0->upperhalf[0] | VAR_2);
            return;
        }
        if (!VAR_0->cycle) {
            VAR_0->data = VAR_2 & 0xff;
        } else {
            FUNC_0(VAR_0, 0, VAR_0->data | (VAR_2 << 8));
        }
        VAR_0->cycle = !VAR_0->cycle;
    } else if (VAR_1 >= 8) {
        VAR_0->upperhalf[VAR_1-8] = VAR_2 << 8;
    } else {
        FUNC_1(VAR_0, VAR_1, VAR_0->upperhalf[VAR_1] | VAR_2);
    }
}
