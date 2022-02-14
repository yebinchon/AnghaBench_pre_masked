
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
__attribute__((used)) static unsigned int FUNC_0(uint16_t VAR_0)
{
    const unsigned int VAR_1 = 0x1F00;
    const unsigned int VAR_2 = 0x1400;
    const unsigned int VAR_3 = 0x1000;
    const unsigned int VAR_4 = 0x0800;
    const unsigned int VAR_5 = 0x0200;
    const unsigned int VAR_6 = 0x0000;
    const unsigned int VAR_7 = 0x001F;
    const unsigned int VAR_8 = 0x0015;
    const unsigned int VAR_9 = 0x000F;
    const unsigned int VAR_10 = 0x0008;
    const unsigned int VAR_11 = 0x0004;
    const unsigned int VAR_12 = 0x0000;
    static const unsigned int VAR_13[] = {
        [130 ] = 0x0000,
        [140 ] = 0x0000,
        [137] = 0x0500,
        [135] = 0x0500,
        [143] = 0x0100,
        [142] = 0x0100,
        [132] = 0x0400,
        [141] = 0x0400,
        [129] = 0x0200,
        [128] = 0x0200,
        [131] = 0x0800,
        [133] = 0x0800,
        [139] = 0x0A00,
        [134] = 0x0A00,
        [138] = 0x0E00,
        [136] = 0x0E00,
    };

    switch (VAR_0>>12) {

      case 0x0:
        if (VAR_0 & 0x100) {
            if ((VAR_0>>3 & 7) == 1) {
                return VAR_6 | VAR_12;
            } else {
                return VAR_6 | VAR_11;
            }
        } else if ((VAR_0>>6 & 3) == 3) {
            return 0;
        } else {
            switch (VAR_0>>9 & 7) {
              case 0:
                if ((VAR_0 & 0xBF) == 0x3C) {
                    return VAR_1 | VAR_7;
                } else {
                    return VAR_6 | VAR_9;
                }
              case 1:
                if ((VAR_0 & 0xBF) == 0x3C) {
                    return VAR_1 | VAR_7;
                } else {
                    return VAR_6 | VAR_9;
                }
              case 2:
                return VAR_6 | VAR_7;
              case 3:
                return VAR_6 | VAR_7;
              case 4:
                return VAR_6 | VAR_11;
              case 5:
                if ((VAR_0 & 0xBF) == 0x3C) {
                    return VAR_1 | VAR_7;
                } else {
                    return VAR_6 | VAR_9;
                }
              case 6:
                return VAR_6 | VAR_9;
              case 7:
                return 0;
            }
        }

      case 0x1:
      case 0x2:
      case 0x3:
        if ((VAR_0>>6 & 7) == 1) {
            return VAR_6 | VAR_12;
        } else {
            return VAR_6 | VAR_9;
        }

      case 0x4:
        if (VAR_0 & 0x0100) {
            switch (VAR_0>>6 & 3) {
              case 0:
              case 1:
                return 0;
              case 2:

                return VAR_4 | VAR_10;
              case 3:
                return VAR_6 | VAR_12;
            }
        } else {
            switch (VAR_0 & 0x0EC0) {
              case 0x0000:
              case 0x0040:
              case 0x0080:
                return VAR_2 | VAR_7;
              case 0x00C0:
                return VAR_1 | VAR_12;
              case 0x0200:
              case 0x0240:
              case 0x0280:
                return VAR_6 | VAR_9;
              case 0x02C0:
                return 0;
              case 0x0400:
              case 0x0440:
              case 0x0480:
                return VAR_6 | VAR_7;
              case 0x04C0:
                return VAR_6 | VAR_7;
              case 0x0600:
              case 0x0640:
              case 0x0680:
                return VAR_6 | VAR_9;
              case 0x06C0:
                return VAR_6 | VAR_7;
              case 0x0800:
                return VAR_2 | VAR_8;
              case 0x0840:
                if ((VAR_0>>3 & 7) == 0) {
                    return VAR_6 | VAR_9;
                } else {
                    return VAR_6 | VAR_12;
                }
              case 0x0880:
              case 0x08C0:
                if ((VAR_0>>3 & 7) == 0) {
                    return VAR_6 | VAR_9;
                } else {
                    return VAR_6 | VAR_12;
                }
              case 0x0A00:
              case 0x0A40:
              case 0x0A80:
              case 0x0AC0:
                return VAR_6 | VAR_9;
              case 0x0C00:
                return 0;
              case 0x0C40:
                switch (VAR_0>>3 & 7) {
                  case 0:
                  case 1:
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                    return VAR_6 | VAR_12;
                  case 6:
                    switch (VAR_0 & 7) {
                      case 0:
                      case 1:
                        return VAR_6 | VAR_12;
                      case 2:
                      case 3:
                        return VAR_6 | VAR_7;
                      case 4:
                        return 0;
                      case 5:
                        return VAR_6 | VAR_12;
                      case 6:
                        return VAR_5 | VAR_12;
                      case 7:
                        return VAR_6 | VAR_7;
                    }
                  case 7:
                    return 0;
                }
              case 0x0C80:
              case 0x0CC0:
                return VAR_6 | VAR_12;
              case 0x0E00:
              case 0x0E40:
                return 0;
              case 0x0E80:
              case 0x0EC0:
                return VAR_6 | VAR_12;
            }
        }

      case 0x5:
        if ((VAR_0>>6 & 3) == 3) {
            return VAR_13[VAR_0>>8 & 0xF] | VAR_12;
        } else {
            if ((VAR_0>>3 & 7) == 1) {
                return VAR_6 | VAR_12;
            } else {
                return VAR_6 | VAR_7;
            }
        }

      case 0x6:

        return VAR_13[VAR_0>>8 & 0xF] | VAR_12;

      case 0x7:
        if (VAR_0 & 0x0100) {
            return 0;
        } else {
            return VAR_6 | VAR_9;
        }

      case 0x8:
        if ((VAR_0>>6 & 3) == 3) {
            return VAR_6 | VAR_9;
        } else if ((VAR_0 & 0x01F0) == 0x0100) {
            return VAR_2 | VAR_8;
        } else {
            return VAR_6 | VAR_9;
        }

      case 0x9:
        if ((VAR_0>>6 & 3) == 3) {
            return VAR_6 | VAR_12;
        } else if ((VAR_0 & 0x0130) == 0x0100) {
            return VAR_2 | VAR_7;
        } else {
            return VAR_6 | VAR_7;
        }

      case 0xA:

        return 0;

      case 0xB:

        return VAR_6 | VAR_9;

      case 0xC:
        if ((VAR_0>>6 & 3) == 3) {
            return VAR_6 | VAR_9;
        } else if ((VAR_0 & 0x01F0) == 0x0100) {
            return VAR_2 | VAR_8;
        } else if ((VAR_0 & 0x0130) == 0x0100) {
            return VAR_6 | VAR_12;
        } else {
            return VAR_6 | VAR_9;
        }

      case 0xD:
        if ((VAR_0>>6 & 3) == 3) {
            return VAR_6 | VAR_12;
        } else if ((VAR_0 & 0x0130) == 0x0100) {
            return VAR_2 | VAR_7;
        } else {
            return VAR_6 | VAR_7;
        }

      case 0xE:

        return VAR_3 | VAR_7;

      case 0xF:

        return 0;

    }

    return 0;
}
