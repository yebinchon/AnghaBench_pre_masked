
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint8_t ;
typedef TYPE_1__* ringbuf_t ;
struct TYPE_5__ {int const* buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int const* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static uint8_t *FUNC_3(ringbuf_t VAR_0, const uint8_t *VAR_1)
{
 FUNC_0((VAR_1 >= VAR_0->buf) && (VAR_1 < FUNC_2(VAR_0)));
 return VAR_0->buf + ((++VAR_1 -VAR_0->buf) % FUNC_1(VAR_0));
}
