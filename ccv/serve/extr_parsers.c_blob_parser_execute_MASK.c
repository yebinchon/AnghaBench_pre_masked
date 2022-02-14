
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t len; unsigned char* data; size_t written; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
typedef TYPE_2__ blob_parser_t ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (unsigned char*,char const*,size_t) ;
 scalar_t__ FUNC_2 (unsigned char*,size_t) ;

void FUNC_3(blob_parser_t* VAR_0, const char* VAR_1, size_t VAR_2)
{
 if (VAR_0->data.len == 0)
 {
  VAR_0->data.len = (VAR_2 * 3 + 1) / 2;
  VAR_0->data.data = (unsigned char*)FUNC_0(VAR_0->data.len);
 } else if (VAR_0->data.written + VAR_2 > VAR_0->data.len) {
  VAR_0->data.len = ((VAR_0->data.len + VAR_2) * 3 + 1) / 2;
  VAR_0->data.data = (unsigned char*)FUNC_2(VAR_0->data.data, VAR_0->data.len);
 }
 FUNC_1(VAR_0->data.data + VAR_0->data.written, VAR_1, VAR_2);
 VAR_0->data.written += VAR_2;
}
