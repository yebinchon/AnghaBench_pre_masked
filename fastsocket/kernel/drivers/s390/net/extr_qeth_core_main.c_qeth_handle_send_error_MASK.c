
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qeth_qdio_out_buffer {TYPE_3__* buffer; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct qeth_card {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__* element; } ;
struct TYPE_5__ {int sflags; } ;


 int FUNC_0 (struct qeth_card*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct qeth_card*,TYPE_3__*,unsigned int,char*) ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_5,
  struct qeth_qdio_out_buffer *VAR_6, unsigned int VAR_7)
{
 int VAR_8 = VAR_6->buffer->element[15].sflags;

 FUNC_1(VAR_4, 6, "hdsnderr");
 if (VAR_5->info.type == VAR_0) {
  if (VAR_8 == 0) {
   VAR_7 = 0;
  } else {
   VAR_7 = 1;
  }
 }
 FUNC_3(VAR_5, VAR_6->buffer, VAR_7, "qouterr");

 if (!VAR_7)
  return VAR_2;

 if ((VAR_8 >= 15) && (VAR_8 <= 31))
  return VAR_3;

 FUNC_1(VAR_4, 1, "lnkfail");
 FUNC_2(VAR_4, 1, "%s", FUNC_0(VAR_5));
 FUNC_2(VAR_4, 1, "%04x %02x",
         (u16)VAR_7, (u8)VAR_8);
 return VAR_1;
}
