
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct zoltrix {unsigned int stereo; unsigned long curfreq; int curvol; scalar_t__ muted; int lock; scalar_t__ io; struct v4l2_device v4l2_dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct v4l2_device*,char*) ;
 int FUNC_6 (struct zoltrix*,int ) ;

__attribute__((used)) static int FUNC_7(struct zoltrix *VAR_1, unsigned long VAR_2)
{

 struct v4l2_device *VAR_3 = &VAR_1->v4l2_dev;
 unsigned long long VAR_4, VAR_5, VAR_6;
 unsigned int VAR_7 = VAR_1->stereo;
 int VAR_8;

 if (VAR_2 == 0) {
  FUNC_5(VAR_3, "cannot set a frequency of 0.\n");
  return -VAR_0;
 }

 VAR_6 = (VAR_2 / 160 - 8800) * 2;
 VAR_5 = (unsigned long long)VAR_6 + 0x4d1c;

 VAR_4 = 0xc480402c10080000ull;
 VAR_8 = 45;

 FUNC_1(&VAR_1->lock);

 VAR_1->curfreq = VAR_2;

 FUNC_3(0, VAR_1->io);
 FUNC_3(0, VAR_1->io);
 FUNC_0(VAR_1->io + 3);

 FUNC_3(0x40, VAR_1->io);
 FUNC_3(0xc0, VAR_1->io);

 VAR_4 = (VAR_4 ^ ((VAR_5 & 0xff) << 47) ^ ((VAR_5 & 0xff00) << 30) ^ (VAR_7 << 31));
 while (VAR_8--) {
  if ((VAR_4 & 0x8000000000000000ull) != 0) {
   FUNC_3(0x80, VAR_1->io);
   FUNC_4(50);
   FUNC_3(0x00, VAR_1->io);
   FUNC_4(50);
   FUNC_3(0x80, VAR_1->io);
   FUNC_4(50);
  } else {
   FUNC_3(0xc0, VAR_1->io);
   FUNC_4(50);
   FUNC_3(0x40, VAR_1->io);
   FUNC_4(50);
   FUNC_3(0xc0, VAR_1->io);
   FUNC_4(50);
  }
  VAR_4 *= 2;
 }

 FUNC_3(0x80, VAR_1->io);
 FUNC_3(0xc0, VAR_1->io);
 FUNC_3(0x40, VAR_1->io);
 FUNC_4(1000);
 FUNC_0(VAR_1->io + 2);

 FUNC_4(1000);

 if (VAR_1->muted) {
  FUNC_3(0, VAR_1->io);
  FUNC_3(0, VAR_1->io);
  FUNC_0(VAR_1->io + 3);
  FUNC_4(1000);
 }

 FUNC_2(&VAR_1->lock);

 if (!VAR_1->muted)
  FUNC_6(VAR_1, VAR_1->curvol);
 return 0;
}
