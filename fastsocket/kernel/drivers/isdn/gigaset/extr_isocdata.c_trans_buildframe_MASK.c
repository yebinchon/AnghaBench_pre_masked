
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isowbuf_t {int write; unsigned char* data; unsigned char idle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct isowbuf_t*) ;
 int FUNC_4 (struct isowbuf_t*) ;
 int FUNC_5 (struct isowbuf_t*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline int FUNC_7(struct isowbuf_t *VAR_5,
       unsigned char *VAR_6, int VAR_7)
{
 int VAR_8;
 unsigned char VAR_9;

 if (FUNC_6(VAR_7 <= 0))
  return VAR_5->write;

 if (FUNC_4(VAR_5) < VAR_7 ||
     !FUNC_5(VAR_5)) {
  FUNC_2(VAR_1, "can't put %d bytes", VAR_7);
  return -VAR_4;
 }

 FUNC_2(VAR_2, "put %d bytes", VAR_7);
 FUNC_1(VAR_3, "snd data", VAR_6, VAR_7);

 VAR_8 = VAR_5->write;
 do {
  VAR_9 = FUNC_0(*VAR_6++);
  VAR_5->data[VAR_8++] = VAR_9;
  VAR_8 %= VAR_0;
 } while (--VAR_7 > 0);
 VAR_5->write = VAR_8;
 VAR_5->idle = VAR_9;

 return FUNC_3(VAR_5);
}
